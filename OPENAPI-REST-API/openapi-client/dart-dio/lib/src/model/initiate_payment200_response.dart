//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'initiate_payment200_response.g.dart';

/// InitiatePayment200Response
///
/// Properties:
/// * [type] - The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result).
/// * [redirect] - URL to redirect the user to for payment (when type is `redirect`).
/// * [action] - Form action URL (when type is `submit`).
/// * [method] - HTTP method for the form submission (when type is `submit`).
/// * [items] - Form field name-value pairs to submit (when type is `submit`).
/// * [text] - Status or result text.
@BuiltValue()
abstract class InitiatePayment200Response implements Built<InitiatePayment200Response, InitiatePayment200ResponseBuilder> {
  /// The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result).
  @BuiltValueField(wireName: r'type')
  InitiatePayment200ResponseTypeEnum? get type;
  // enum typeEnum {  redirect,  submit,  single,  };

  /// URL to redirect the user to for payment (when type is `redirect`).
  @BuiltValueField(wireName: r'redirect')
  String? get redirect;

  /// Form action URL (when type is `submit`).
  @BuiltValueField(wireName: r'action')
  String? get action;

  /// HTTP method for the form submission (when type is `submit`).
  @BuiltValueField(wireName: r'method')
  String? get method;

  /// Form field name-value pairs to submit (when type is `submit`).
  @BuiltValueField(wireName: r'items')
  JsonObject? get items;

  /// Status or result text.
  @BuiltValueField(wireName: r'text')
  String? get text;

  InitiatePayment200Response._();

  factory InitiatePayment200Response([void updates(InitiatePayment200ResponseBuilder b)]) = _$InitiatePayment200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(InitiatePayment200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<InitiatePayment200Response> get serializer => _$InitiatePayment200ResponseSerializer();
}

class _$InitiatePayment200ResponseSerializer implements PrimitiveSerializer<InitiatePayment200Response> {
  @override
  final Iterable<Type> types = const [InitiatePayment200Response, _$InitiatePayment200Response];

  @override
  final String wireName = r'InitiatePayment200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    InitiatePayment200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.type != null) {
      yield r'type';
      yield serializers.serialize(
        object.type,
        specifiedType: const FullType(InitiatePayment200ResponseTypeEnum),
      );
    }
    if (object.redirect != null) {
      yield r'redirect';
      yield serializers.serialize(
        object.redirect,
        specifiedType: const FullType(String),
      );
    }
    if (object.action != null) {
      yield r'action';
      yield serializers.serialize(
        object.action,
        specifiedType: const FullType(String),
      );
    }
    if (object.method != null) {
      yield r'method';
      yield serializers.serialize(
        object.method,
        specifiedType: const FullType(String),
      );
    }
    if (object.items != null) {
      yield r'items';
      yield serializers.serialize(
        object.items,
        specifiedType: const FullType(JsonObject),
      );
    }
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    InitiatePayment200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required InitiatePayment200ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(InitiatePayment200ResponseTypeEnum),
          ) as InitiatePayment200ResponseTypeEnum;
          result.type = valueDes;
          break;
        case r'redirect':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.redirect = valueDes;
          break;
        case r'action':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.action = valueDes;
          break;
        case r'method':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.method = valueDes;
          break;
        case r'items':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(JsonObject),
          ) as JsonObject;
          result.items = valueDes;
          break;
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  InitiatePayment200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = InitiatePayment200ResponseBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

class InitiatePayment200ResponseTypeEnum extends EnumClass {

  /// The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result).
  @BuiltValueEnumConst(wireName: r'redirect')
  static const InitiatePayment200ResponseTypeEnum redirect = _$initiatePayment200ResponseTypeEnum_redirect;
  /// The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result).
  @BuiltValueEnumConst(wireName: r'submit')
  static const InitiatePayment200ResponseTypeEnum submit = _$initiatePayment200ResponseTypeEnum_submit;
  /// The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result).
  @BuiltValueEnumConst(wireName: r'single')
  static const InitiatePayment200ResponseTypeEnum single = _$initiatePayment200ResponseTypeEnum_single;

  static Serializer<InitiatePayment200ResponseTypeEnum> get serializer => _$initiatePayment200ResponseTypeEnumSerializer;

  const InitiatePayment200ResponseTypeEnum._(String name): super(name);

  static BuiltSet<InitiatePayment200ResponseTypeEnum> get values => _$initiatePayment200ResponseTypeEnumValues;
  static InitiatePayment200ResponseTypeEnum valueOf(String name) => _$initiatePayment200ResponseTypeEnumValueOf(name);
}

