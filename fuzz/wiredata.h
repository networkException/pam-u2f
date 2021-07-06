#ifndef FUZZ_WIREDATA_H
#define FUZZ_WIREDATA_H

/* clang-format off */

#define WIREDATA_CTAP_INIT                        \
  0xff, 0xff, 0xff, 0xff, 0x86, 0x00, 0x11, 0x2d, \
  0xfd, 0xec, 0xb8, 0x5f, 0xad, 0x82, 0x4e, 0xc5, \
  0x71, 0xf8, 0x01, 0x02, 0x05, 0x05, 0x04, 0x05, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_INFO                   \
  0xc5, 0x71, 0xf8, 0x01, 0x90, 0x01, 0x5a, 0x00, \
  0xb1, 0x01, 0x84, 0x66, 0x55, 0x32, 0x46, 0x5f, \
  0x56, 0x32, 0x68, 0x46, 0x49, 0x44, 0x4f, 0x5f, \
  0x32, 0x5f, 0x30, 0x6c, 0x46, 0x49, 0x44, 0x4f, \
  0x5f, 0x32, 0x5f, 0x31, 0x5f, 0x50, 0x52, 0x45, \
  0x68, 0x46, 0x49, 0x44, 0x4f, 0x5f, 0x32, 0x5f, \
  0x31, 0x02, 0x85, 0x6b, 0x63, 0x72, 0x65, 0x64, \
  0x50, 0x72, 0x6f, 0x74, 0x65, 0x63, 0x74, 0x6b, \
  0xc5, 0x71, 0xf8, 0x01, 0x00, 0x68, 0x6d, 0x61, \
  0x63, 0x2d, 0x73, 0x65, 0x63, 0x72, 0x65, 0x74, \
  0x6c, 0x6c, 0x61, 0x72, 0x67, 0x65, 0x42, 0x6c, \
  0x6f, 0x62, 0x4b, 0x65, 0x79, 0x68, 0x63, 0x72, \
  0x65, 0x64, 0x42, 0x6c, 0x6f, 0x62, 0x6c, 0x6d, \
  0x69, 0x6e, 0x50, 0x69, 0x6e, 0x4c, 0x65, 0x6e, \
  0x67, 0x74, 0x68, 0x03, 0x50, 0xf8, 0xa0, 0x11, \
  0xf3, 0x8c, 0x0a, 0x4d, 0x15, 0x80, 0x06, 0x17, \
  0xc5, 0x71, 0xf8, 0x01, 0x01, 0x11, 0x1f, 0x9e, \
  0xdc, 0x7d, 0x04, 0xab, 0x62, 0x72, 0x6b, 0xf5, \
  0x62, 0x75, 0x70, 0xf5, 0x64, 0x70, 0x6c, 0x61, \
  0x74, 0xf4, 0x68, 0x63, 0x72, 0x65, 0x64, 0x4d, \
  0x67, 0x6d, 0x74, 0xf5, 0x69, 0x61, 0x75, 0x74, \
  0x68, 0x6e, 0x72, 0x43, 0x66, 0x67, 0xf5, 0x69, \
  0x63, 0x6c, 0x69, 0x65, 0x6e, 0x74, 0x50, 0x69, \
  0x6e, 0xf5, 0x6a, 0x6c, 0x61, 0x72, 0x67, 0x65, \
  0xc5, 0x71, 0xf8, 0x01, 0x02, 0x42, 0x6c, 0x6f, \
  0x62, 0x73, 0xf5, 0x6e, 0x70, 0x69, 0x6e, 0x55, \
  0x76, 0x41, 0x75, 0x74, 0x68, 0x54, 0x6f, 0x6b, \
  0x65, 0x6e, 0xf5, 0x6f, 0x73, 0x65, 0x74, 0x4d, \
  0x69, 0x6e, 0x50, 0x49, 0x4e, 0x4c, 0x65, 0x6e, \
  0x67, 0x74, 0x68, 0xf5, 0x70, 0x6d, 0x61, 0x6b, \
  0x65, 0x43, 0x72, 0x65, 0x64, 0x55, 0x76, 0x4e, \
  0x6f, 0x74, 0x52, 0x71, 0x64, 0xf5, 0x75, 0x63, \
  0xc5, 0x71, 0xf8, 0x01, 0x03, 0x72, 0x65, 0x64, \
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x4d, 0x67, \
  0x6d, 0x74, 0x50, 0x72, 0x65, 0x76, 0x69, 0x65, \
  0x77, 0xf5, 0x05, 0x19, 0x04, 0xb0, 0x06, 0x82, \
  0x02, 0x01, 0x07, 0x08, 0x08, 0x18, 0x80, 0x09, \
  0x82, 0x63, 0x6e, 0x66, 0x63, 0x63, 0x75, 0x73, \
  0x62, 0x0a, 0x82, 0xa2, 0x63, 0x61, 0x6c, 0x67, \
  0x26, 0x64, 0x74, 0x79, 0x70, 0x65, 0x6a, 0x70, \
  0xc5, 0x71, 0xf8, 0x01, 0x04, 0x75, 0x62, 0x6c, \
  0x69, 0x63, 0x2d, 0x6b, 0x65, 0x79, 0xa2, 0x63, \
  0x61, 0x6c, 0x67, 0x27, 0x64, 0x74, 0x79, 0x70, \
  0x65, 0x6a, 0x70, 0x75, 0x62, 0x6c, 0x69, 0x63, \
  0x2d, 0x6b, 0x65, 0x79, 0x0b, 0x19, 0x04, 0x00, \
  0x0c, 0xf5, 0x0d, 0x04, 0x0e, 0x1a, 0x00, 0x05, \
  0x05, 0x04, 0x0f, 0x18, 0x20, 0x10, 0x01, 0x14, \
  0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_ASSERT_DISCOVER        \
  0xc5, 0x71, 0xf8, 0x01, 0x90, 0x00, 0xcc, 0x00, \
  0xa3, 0x01, 0xa2, 0x62, 0x69, 0x64, 0x58, 0x40, \
  0x08, 0x22, 0x87, 0x79, 0x51, 0x54, 0x10, 0x9d, \
  0x7d, 0x92, 0xce, 0x34, 0x17, 0x48, 0xee, 0x9a, \
  0x04, 0xbe, 0xa5, 0x8d, 0xe1, 0xf9, 0xcd, 0xba, \
  0xa8, 0xef, 0x99, 0xbd, 0xaf, 0xc4, 0x5f, 0xc2, \
  0x17, 0x72, 0x2d, 0x2d, 0x33, 0x2c, 0xdc, 0xa6, \
  0xbd, 0x61, 0x3c, 0xef, 0x05, 0xa3, 0x8d, 0xe3, \
  0xc5, 0x71, 0xf8, 0x01, 0x00, 0x92, 0x11, 0x2d, \
  0x9e, 0x8f, 0x65, 0xae, 0xda, 0x9a, 0xa5, 0xba, \
  0x52, 0x74, 0x42, 0x90, 0x5a, 0x64, 0x74, 0x79, \
  0x70, 0x65, 0x6a, 0x70, 0x75, 0x62, 0x6c, 0x69, \
  0x63, 0x2d, 0x6b, 0x65, 0x79, 0x02, 0x58, 0x25, \
  0xa0, 0x7c, 0xaf, 0x20, 0xec, 0xfa, 0x73, 0x62, \
  0x00, 0x90, 0x5f, 0xcf, 0x43, 0xd0, 0x87, 0x7f, \
  0x38, 0x33, 0xca, 0xf1, 0x58, 0x3c, 0xdb, 0x2b, \
  0xc5, 0x71, 0xf8, 0x01, 0x01, 0x57, 0x9c, 0x21, \
  0x5d, 0x26, 0xb8, 0x9d, 0x6f, 0x00, 0x00, 0x00, \
  0x00, 0x0f, 0x03, 0x58, 0x48, 0x30, 0x46, 0x02, \
  0x21, 0x00, 0xc8, 0x0d, 0x59, 0x84, 0x98, 0x7f, \
  0x25, 0x05, 0x40, 0x09, 0x34, 0xe6, 0x63, 0x1c, \
  0xd3, 0xa4, 0x3b, 0x30, 0xc1, 0xd8, 0x93, 0xa2, \
  0xcb, 0x8d, 0x4a, 0x37, 0xdd, 0x45, 0x95, 0x1d, \
  0x70, 0x83, 0x02, 0x21, 0x00, 0xbc, 0x55, 0x0a, \
  0xc5, 0x71, 0xf8, 0x01, 0x02, 0x78, 0xa8, 0xbe, \
  0xae, 0xbb, 0x05, 0xbb, 0x27, 0x4d, 0x9a, 0x55, \
  0xdc, 0x66, 0xd7, 0x0c, 0x7a, 0x02, 0x5b, 0x94, \
  0x69, 0x3c, 0xca, 0x7d, 0x05, 0xfb, 0x5d, 0x9f, \
  0xcd, 0xe6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define WIREDATA_CTAP_CBOR_ASSERT_AUTHENTICATE    \
  0xc5, 0x71, 0xf8, 0x01, 0x90, 0x00, 0xca, 0x00, \
  0xa3, 0x01, 0xa2, 0x62, 0x69, 0x64, 0x58, 0x40, \
  0x08, 0x22, 0x87, 0x79, 0x51, 0x54, 0x10, 0x9d, \
  0x7d, 0x92, 0xce, 0x34, 0x17, 0x48, 0xee, 0x9a, \
  0x04, 0xbe, 0xa5, 0x8d, 0xe1, 0xf9, 0xcd, 0xba, \
  0xa8, 0xef, 0x99, 0xbd, 0xaf, 0xc4, 0x5f, 0xc2, \
  0x17, 0x72, 0x2d, 0x2d, 0x33, 0x2c, 0xdc, 0xa6, \
  0xbd, 0x61, 0x3c, 0xef, 0x05, 0xa3, 0x8d, 0xe3, \
  0xc5, 0x71, 0xf8, 0x01, 0x00, 0x92, 0x11, 0x2d, \
  0x9e, 0x8f, 0x65, 0xae, 0xda, 0x9a, 0xa5, 0xba, \
  0x52, 0x74, 0x42, 0x90, 0x5a, 0x64, 0x74, 0x79, \
  0x70, 0x65, 0x6a, 0x70, 0x75, 0x62, 0x6c, 0x69, \
  0x63, 0x2d, 0x6b, 0x65, 0x79, 0x02, 0x58, 0x25, \
  0xa0, 0x7c, 0xaf, 0x20, 0xec, 0xfa, 0x73, 0x62, \
  0x00, 0x90, 0x5f, 0xcf, 0x43, 0xd0, 0x87, 0x7f, \
  0x38, 0x33, 0xca, 0xf1, 0x58, 0x3c, 0xdb, 0x2b, \
  0xc5, 0x71, 0xf8, 0x01, 0x01, 0x57, 0x9c, 0x21, \
  0x5d, 0x26, 0xb8, 0x9d, 0x6f, 0x01, 0x00, 0x00, \
  0x00, 0x11, 0x03, 0x58, 0x46, 0x30, 0x44, 0x02, \
  0x20, 0x49, 0x5d, 0x30, 0x0d, 0x07, 0x31, 0x41, \
  0x97, 0xe8, 0x0a, 0xd9, 0x23, 0x8f, 0x46, 0x9a, \
  0x84, 0xca, 0x47, 0x2e, 0x99, 0xb0, 0x65, 0x34, \
  0x77, 0x87, 0xab, 0xf7, 0x65, 0x47, 0x89, 0x08, \
  0xb1, 0x02, 0x20, 0x39, 0x2a, 0x96, 0xd2, 0xdd, \
  0xc5, 0x71, 0xf8, 0x01, 0x02, 0xa9, 0x5f, 0x90, \
  0xd8, 0xee, 0xc9, 0x5b, 0x00, 0x38, 0xe0, 0xf6, \
  0x0b, 0xaa, 0xdc, 0xc5, 0x4a, 0xfc, 0x7d, 0x96, \
  0xd6, 0x3a, 0x91, 0x81, 0x36, 0xb7, 0x7f, 0x15, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

/* clang-format on*/
#endif
