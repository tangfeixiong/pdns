#ifndef _MD5_H
#define _MD5_H

#include <string>
#include <stdint.h>
#include <polarssl/md5.h>

inline std::string pdns_md5sum(const std::string& input)
{
  unsigned char result[16] = {0};
  md5(reinterpret_cast<const unsigned char*>(input.c_str()), input.length(), result);
  return std::string(result, result + sizeof result);
}

#endif /* md5.h */
