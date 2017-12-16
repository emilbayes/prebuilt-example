#include <nan.h>

NAN_METHOD(Main) {
  info.GetReturnValue().Set(Nan::True());
}

NAN_MODULE_INIT(InitAll) {
  Nan::Set(target, Nan::New("main").ToLocalChecked(), Nan::GetFunction(Nan::New<v8::FunctionTemplate>(Main)).ToLocalChecked());
}

NODE_MODULE(index, InitAll)
