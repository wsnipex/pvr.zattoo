#pragma once

#include <sstream>
#include <string>
#include <vector>

class Utils
{
public:
  static std::string GetFilePath(std::string strPath, bool bUserPath = true);
  static std::string UrlEncode(const std::string &string);
  static double StringToDouble(const std::string &value);
  static int StringToInt(const std::string &value);
  static std::string ReadFile(const std::string path);
  static std::vector<std::string> SplitString(const std::string &str,
      const char &delim, int maxParts = 0);
};
