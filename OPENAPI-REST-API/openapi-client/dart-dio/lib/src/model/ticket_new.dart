//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'ticket_new.g.dart';

/// New helpdesk ticket request.  
///
/// Properties:
/// * [subject] 
/// * [body] 
/// * [serviceId] 
/// * [serviceModule] 
@BuiltValue()
abstract class TicketNew implements Built<TicketNew, TicketNewBuilder> {
  @BuiltValueField(wireName: r'subject')
  String get subject;

  @BuiltValueField(wireName: r'body')
  String get body;

  @BuiltValueField(wireName: r'service_id')
  int? get serviceId;

  @BuiltValueField(wireName: r'service_module')
  String? get serviceModule;

  TicketNew._();

  factory TicketNew([void updates(TicketNewBuilder b)]) = _$TicketNew;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(TicketNewBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<TicketNew> get serializer => _$TicketNewSerializer();
}

class _$TicketNewSerializer implements PrimitiveSerializer<TicketNew> {
  @override
  final Iterable<Type> types = const [TicketNew, _$TicketNew];

  @override
  final String wireName = r'TicketNew';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    TicketNew object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'subject';
    yield serializers.serialize(
      object.subject,
      specifiedType: const FullType(String),
    );
    yield r'body';
    yield serializers.serialize(
      object.body,
      specifiedType: const FullType(String),
    );
    if (object.serviceId != null) {
      yield r'service_id';
      yield serializers.serialize(
        object.serviceId,
        specifiedType: const FullType(int),
      );
    }
    if (object.serviceModule != null) {
      yield r'service_module';
      yield serializers.serialize(
        object.serviceModule,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    TicketNew object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required TicketNewBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'subject':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.subject = valueDes;
          break;
        case r'body':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.body = valueDes;
          break;
        case r'service_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.serviceId = valueDes;
          break;
        case r'service_module':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceModule = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  TicketNew deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = TicketNewBuilder();
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

