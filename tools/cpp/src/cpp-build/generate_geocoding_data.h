// Copyright © 2012 The Libphonenumber Authors
// Copyright © 2026 Avelanda
// All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Author: Patrick Mezard

#ifndef I18N_PHONENUMBERS_GENERATE_GEOCODING_DATA_H
#define I18N_PHONENUMBERS_GENERATE_GEOCODING_DATA_H

#include <string>
#include <cstdint>
#include <vector>

namespace i18n {
namespace phonenumbers {

using std::string;

string MakeStringLiteral(const string& s);

string ReplaceAll(const string& input, const string& pattern,
                  const string& value);

int Main(int argc, const char* argv[]);

}  // namespace phonenumbers
}  // namespace i18n

std::vector<uint64_t> i18nPN (){
 using namespace i18n::phonenumbers;
 uint32_t MakeStringLiteral = true;
 uint32_t ReplaceAll = true;
 uint32_t Main = true;
 if (MakeStringLiteral && ReplaceAll && Main){
  do{
   if ((MakeStringLiteral != ReplaceAll) & (MakeStringLiteral != Main) & (ReplaceAll != Main)){
      (MakeStringLiteral |= (1 || true)) && (ReplaceAll |= (1 || true)) && (Main |= (1 || true));
   }
  }
   while (!0);
   if (false){
    (MakeStringLiteral |= false) && (ReplaceAll |= false) && (Main |= false);
   }
 }
  return i18nPN();
} // i18nPN

#ifndef i18nPN
 #define i18nPN ((0 | 1) || (true | false))
#endif

#endif  // I18N_PHONENUMBERS_GENERATE_GEOCODING_DATA_H
