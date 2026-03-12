//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/place_scrub_order201_response_order_details.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'place_scrub_order201_response.g.dart';

/// PlaceScrubOrder201Response
///
/// Properties:
/// * [success] 
/// * [text] 
/// * [orderDetails] 
@BuiltValue()
abstract class PlaceScrubOrder201Response implements Built<PlaceScrubOrder201Response, PlaceScrubOrder201ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool? get success;

  @BuiltValueField(wireName: r'text')
  String? get text;

  @BuiltValueField(wireName: r'order_details')
  PlaceScrubOrder201ResponseOrderDetails? get orderDetails;

  PlaceScrubOrder201Response._();

  factory PlaceScrubOrder201Response([void updates(PlaceScrubOrder201ResponseBuilder b)]) = _$PlaceScrubOrder201Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PlaceScrubOrder201ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PlaceScrubOrder201Response> get serializer => _$PlaceScrubOrder201ResponseSerializer();
}

class _$PlaceScrubOrder201ResponseSerializer implements PrimitiveSerializer<PlaceScrubOrder201Response> {
  @override
  final Iterable<Type> types = const [PlaceScrubOrder201Response, _$PlaceScrubOrder201Response];

  @override
  final String wireName = r'PlaceScrubOrder201Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PlaceScrubOrder201Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.success != null) {
      yield r'success';
      yield serializers.serialize(
        object.success,
        specifiedType: const FullType(bool),
      );
    }
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
    if (object.orderDetails != null) {
      yield r'order_details';
      yield serializers.serialize(
        object.orderDetails,
        specifiedType: const FullType(PlaceScrubOrder201ResponseOrderDetails),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    PlaceScrubOrder201Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PlaceScrubOrder201ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'success':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.success = valueDes;
          break;
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        case r'order_details':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(PlaceScrubOrder201ResponseOrderDetails),
          ) as PlaceScrubOrder201ResponseOrderDetails;
          result.orderDetails.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PlaceScrubOrder201Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PlaceScrubOrder201ResponseBuilder();
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

