//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct DictionaryContainer;

struct Input;

struct KeyboardLayout;

struct LanguageModel;

struct LanguageModelContext {
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _field1;
    unsigned long long _field2;
};

struct RefPtr<KB::DictionaryContainer> {
    struct DictionaryContainer *_field1;
};

struct RefPtr<TI::Favonius::KeyboardLayout> {
    struct KeyboardLayout *_field1;
};

struct RefPtr<TI::Favonius::LayoutKey>;

struct String {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned char _field4;
    char *_field5;
    char _field6[16];
};

struct StrokeBuildManager;

struct TIInputManagerZephyr {
    CDUnknownFunctionPointerType *_field1;
    struct vector<KB::Input, std::__1::allocator<KB::Input>> _field2;
    struct String _field3;
    struct String _field4;
    unsigned int _field5;
    unsigned int _field6;
    _Bool _field7;
    _Bool _field8;
    struct __CFString *_field9;
    struct __CFLocale *_field10;
    struct RefPtr<KB::DictionaryContainer> _field11;
    _Bool _field12;
    struct StrokeBuildManager *_field13;
    struct String _field14;
    _Bool _field15;
    _Bool _field16;
    _Bool _field17;
    _Bool _field18;
    struct shared_ptr<KB::LanguageModel> _field19;
    struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> _field20;
    struct RefPtr<TI::Favonius::KeyboardLayout> _field21;
    struct String _field22;
    struct LanguageModelContext _field23;
    struct shared_ptr<KB::TypologyLogger> _field24;
};

struct TypologyLogger;

struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> {
    unsigned long long _field1;
    struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> _field2;
};

struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> {
    struct RefPtr<TI::Favonius::LayoutKey> *_field1;
    unsigned long long _field2;
};

struct __shared_weak_count;

struct shared_ptr<KB::LanguageModel> {
    struct LanguageModel *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<KB::TypologyLogger> {
    struct TypologyLogger *_field1;
    struct __shared_weak_count *_field2;
};

struct vector<KB::Input, std::__1::allocator<KB::Input>> {
    struct Input *_field1;
    struct Input *_field2;
    struct __compressed_pair<KB::Input *, std::__1::allocator<KB::Input>> {
        struct Input *_field1;
    } _field3;
};

struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *_field1;
    unsigned int *_field2;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *_field1;
    } _field3;
};

