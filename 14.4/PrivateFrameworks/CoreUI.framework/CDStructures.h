//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MISSING_TYPE;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CPSDActionKeyedItem;

struct CPSDAdditionalLayerInfo {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    struct CPSDAdditionalLayerInfoItem *_field4;
};

struct CPSDAdditionalLayerInfoItem;

struct CPSDChannelBlendingInfo;

struct CPSDChannelLengthInfo;

struct CPSDColorModeData {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    char *_field4;
};

struct CPSDFile {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    char *_field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned char _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned short _field9;
    unsigned long long _field10;
    unsigned short _field11;
    unsigned short _field12;
    char *_field13;
    struct CPSDChannelLengthInfo *_field14;
    char **_field15;
    unsigned short _field16;
    void *_field17;
    unsigned char _field18;
    struct CPSDHeader _field19;
    struct CPSDColorModeData _field20;
    struct CPSDImageResources _field21;
    struct CPSDLayerAndMaskInfo _field22;
    unsigned char _field23;
};

struct CPSDGlobalLayerMaskInfo {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned short _field4;
    unsigned short _field5[4];
    unsigned short _field6;
    unsigned char _field7;
    unsigned int _field8;
};

struct CPSDHeader {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned short _field4;
    unsigned char _field5[6];
    unsigned short _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned short _field9;
    unsigned short _field10;
};

struct CPSDImageResourceBlock;

struct CPSDImageResources {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    struct CPSDImageResourceBlock *_field4;
};

struct CPSDLayerAndMaskInfo {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    struct CPSDLayerInfo _field4;
    struct CPSDGlobalLayerMaskInfo _field5;
    struct CPSDAdditionalLayerInfo _field6;
};

struct CPSDLayerBlendingRanges {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct vector<CPSDChannelBlendingInfo, std::__1::allocator<CPSDChannelBlendingInfo>> _field6;
};

struct CPSDLayerChannelGroup;

struct CPSDLayerInfo {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned short _field4;
    struct vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord>> _field5;
    struct vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *>> _field6;
};

struct CPSDLayerMaskData {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned short _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned char _field15;
    unsigned char _field16;
};

struct CPSDLayerRecord {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned short _field7;
    struct vector<CPSDChannelLengthInfo, std::__1::allocator<CPSDChannelLengthInfo>> _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned int _field15;
    struct CPSDLayerMaskData _field16;
    struct CPSDLayerBlendingRanges _field17;
    char _field18[256];
    struct CPSDAdditionalLayerInfo _field19;
};

struct CPSDObjectEffectsLayerInfo {
    CDUnknownFunctionPointerType *_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned long long _field4;
    char *_field5;
    unsigned int _field6;
    unsigned int _field7;
    struct CPSDAdditionalLayerInfoItem *_field8;
    struct CPSDString _field9;
    char *_field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    struct vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem>> _field14;
    unsigned int _field15;
    unsigned int _field16;
};

struct CPSDString {
    unsigned int _field1;
    unsigned short *_field2;
};

struct FontValue {
    char _field1[128];
    float _field2;
};

struct PSDColorRGBA {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct PSDGradient {
    double _field1;
    double _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    double _field6;
    double _field7;
    double _field8;
    int _field9;
    struct PSDColorRGBA _field10;
    struct vector<PSDGradientColorStop, std::__1::allocator<PSDGradientColorStop>> _field11;
    struct vector<PSDGradientOpacityStop, std::__1::allocator<PSDGradientOpacityStop>> _field12;
};

struct PSDGradientColorStop;

struct PSDGradientOpacityStop;

struct _CUIVibrantColorMatrixOptions {
    double _field1[4];
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PSDImageInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    int _field6;
};

struct _carextendedMetadata {
    unsigned int _field1;
    char _field2[256];
    char _field3[256];
    char _field4[256];
    char _field5[256];
};

struct _carheader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    char _field6[128];
    char _field7[256];
    unsigned char _field8[16];
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
};

struct _colordef {
    unsigned int _field1;
    unsigned int _field2;
    struct _rgbquad _field3;
};

struct _csibitmap {
    unsigned int _field1;
    union {
        unsigned int _field1;
        struct _csibitmapflags {
            unsigned int :1;
            unsigned int :1;
            unsigned int :30;
        } _field2;
    } _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned char _field5[0];
};

struct _csicolor {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int :8;
    unsigned int :3;
    unsigned int :21;
    unsigned int _field3;
    double _field4[0];
};

struct _csiheader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int :4;
    unsigned int :28;
    struct _csimetadata {
        unsigned int _field1;
        unsigned short _field2;
        unsigned short _field3;
        char _field4[128];
    } _field8;
    unsigned int _field9;
    struct _csibitmaplist {
        unsigned int _field1;
        unsigned int _field2[0];
    } _field10;
};

struct _csitextstyle {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    float _field4;
    float _field5;
    float _field6;
    unsigned int _field7;
    unsigned int _field8;
    char _field9[0];
};

struct _cuieffectdata {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct _cuieffectlist {
        unsigned int _field1;
        unsigned int _field2[0];
    } _field5;
};

struct _psdGradientColor {
    double red;
    double green;
    double blue;
    double alpha;
};

struct _renditionkeyattributeindex {
    unsigned long long keymask;
    unsigned char keyindices[65];
    unsigned int nkeys;
    unsigned int keylist[29];
};

struct _renditionkeyfmt {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4[0];
};

struct _renditionkeytoken {
    unsigned short identifier;
    unsigned short value;
};

struct _rgbquad {
    unsigned int :8;
    unsigned int :8;
    unsigned int :8;
    unsigned int :8;
};

struct crmFlags {
    unsigned int scalesVertically:1;
    unsigned int scalesHorizontally:1;
    unsigned int reserved:14;
};

struct cuithemerenditionrenditionflags {
    unsigned int isVectorBased:1;
    unsigned int isOpaque:1;
    unsigned int bitmapEncoding:4;
    unsigned int optOutOfThinning:1;
    unsigned int isFlippable:1;
    unsigned int isTintable:1;
    unsigned int preservedVectorRepresentation:1;
    unsigned int reserved:22;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct vImage_Buffer {
    void *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem>> {
    struct CPSDActionKeyedItem *_field1;
    struct CPSDActionKeyedItem *_field2;
    struct __compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem>> {
        struct CPSDActionKeyedItem *_field1;
    } _field3;
};

struct vector<CPSDChannelBlendingInfo, std::__1::allocator<CPSDChannelBlendingInfo>> {
    struct CPSDChannelBlendingInfo *_field1;
    struct CPSDChannelBlendingInfo *_field2;
    struct __compressed_pair<CPSDChannelBlendingInfo *, std::__1::allocator<CPSDChannelBlendingInfo>> {
        struct CPSDChannelBlendingInfo *_field1;
    } _field3;
};

struct vector<CPSDChannelLengthInfo, std::__1::allocator<CPSDChannelLengthInfo>> {
    struct CPSDChannelLengthInfo *_field1;
    struct CPSDChannelLengthInfo *_field2;
    struct __compressed_pair<CPSDChannelLengthInfo *, std::__1::allocator<CPSDChannelLengthInfo>> {
        struct CPSDChannelLengthInfo *_field1;
    } _field3;
};

struct vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *>> {
    struct CPSDLayerChannelGroup **_field1;
    struct CPSDLayerChannelGroup **_field2;
    struct __compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *>> {
        struct CPSDLayerChannelGroup **_field1;
    } _field3;
};

struct vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord>> {
    struct CPSDLayerRecord *_field1;
    struct CPSDLayerRecord *_field2;
    struct __compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord>> {
        struct CPSDLayerRecord *_field1;
    } _field3;
};

struct vector<PSDGradientColorStop, std::__1::allocator<PSDGradientColorStop>> {
    struct PSDGradientColorStop *_field1;
    struct PSDGradientColorStop *_field2;
    struct __compressed_pair<PSDGradientColorStop *, std::__1::allocator<PSDGradientColorStop>> {
        struct PSDGradientColorStop *_field1;
    } _field3;
};

struct vector<PSDGradientOpacityStop, std::__1::allocator<PSDGradientOpacityStop>> {
    struct PSDGradientOpacityStop *_field1;
    struct PSDGradientOpacityStop *_field2;
    struct __compressed_pair<PSDGradientOpacityStop *, std::__1::allocator<PSDGradientOpacityStop>> {
        struct PSDGradientOpacityStop *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    _Bool _field6;
} CDStruct_073a3662;

typedef struct {
    unsigned int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
} CDStruct_bdea167c;

typedef struct {
    unsigned int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
} CDStruct_3d979a67;

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    double top;
    double left;
    double bottom;
    double right;
} CDStruct_3c058996;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    _Bool _field6;
    _Bool _field7;
} CDStruct_2a8bd0fe;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    unsigned int _field13;
} CDStruct_c78fd0c4;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
} CDStruct_265c7ca9;

typedef struct {
    long long _field1;
    char *_field2;
    char *_field3;
} CDStruct_c77fb927;

typedef struct {
    unsigned int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    struct CGPoint _field9;
} CDStruct_a5d4af33;

typedef struct {
    char *_field1;
    char *_field2;
    struct _renditionkeytoken _field3[5];
    long long _field4;
    long long _field5;
    struct {
        char *_field1;
        char *_field2;
        long long _field3;
        unsigned long long _field4;
    } _field6[12];
} CDStruct_26b2aa83;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    struct CGPoint _field9;
} CDStruct_ca46f23f;

typedef struct {
    struct CGSize _field1;
    struct CGSize _field2;
    struct CGSize _field3;
} CDStruct_1ba92a5e;

typedef struct {
    unsigned int effectType;
    unsigned int effectParameter;
    CDUnion_577fdfa6 effectValue;
} CDStruct_c57d91d4;

typedef struct {
    char *_field1;
    char *_field2;
    _Bool _field3;
    long long _field4;
    CDStruct_26b2aa83 _field5[8];
} CDStruct_22c2ae3f;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    CDStruct_c57d91d4 _field6[125];
} CDStruct_35a2250d;

#pragma mark Typedef'd Unions

typedef union {
    double floatValue;
    unsigned long long intValue;
    struct _rgbcolor {
        unsigned char r;
        unsigned char g;
        unsigned char b;
    } colorValue;
    short angleValue;
    unsigned int enumValue;
} CDUnion_577fdfa6;

