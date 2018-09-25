#pragma once
#include "bstream.h"

class StreamUtil {
public:
	static void PadFileStream(bStream::CFileStream* writer, long pad_size) {
		// Pad up to a 32 byte alignment
		// Formula: (x + (n-1)) & ~(n-1)
        long stream_size = static_cast<long>(writer->getSize());

        long nextAligned = (stream_size + (pad_size - 1)) & ~(pad_size - 1);

        long delta = nextAligned - stream_size;
        writer->seek(stream_size);
		for (int i = 0; i < delta; i++)
		{
			writer->writeInt8(0);
		}
	}
};
