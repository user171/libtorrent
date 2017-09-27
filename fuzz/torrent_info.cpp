#include "libtorrent/torrent_info.hpp"

extern "C" int LLVMFuzzerTestOneInput(uint8_t const* data, size_t size)
{
	lt::torrent_info ti(reinterpret_cast<char const*>(data), size);
	return 0;
}

