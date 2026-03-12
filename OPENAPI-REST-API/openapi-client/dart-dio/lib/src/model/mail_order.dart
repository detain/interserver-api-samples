//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_order.g.dart';

/// A mail order record
///
/// Properties:
/// * [id] - The ID of the order.
/// * [status] - The order status.
/// * [username] - The username to use for this order.
/// * [comment] - Optional order comment.
@BuiltValue()
abstract class MailOrder implements Built<MailOrder, MailOrderBuilder> {
  /// The ID of the order.
  @BuiltValueField(wireName: r'id')
  int get id;

  /// The order status.
  @BuiltValueField(wireName: r'status')
  String get status;

  /// The username to use for this order.
  @BuiltValueField(wireName: r'username')
  String get username;

  /// Optional order comment.
  @BuiltValueField(wireName: r'comment')
  String? get comment;

  MailOrder._();

  factory MailOrder([void updates(MailOrderBuilder b)]) = _$MailOrder;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailOrderBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailOrder> get serializer => _$MailOrderSerializer();
}

class _$MailOrderSerializer implements PrimitiveSerializer<MailOrder> {
  @override
  final Iterable<Type> types = const [MailOrder, _$MailOrder];

  @override
  final String wireName = r'MailOrder';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'id';
    yield serializers.serialize(
      object.id,
      specifiedType: const FullType(int),
    );
    yield r'status';
    yield serializers.serialize(
      object.status,
      specifiedType: const FullType(String),
    );
    yield r'username';
    yield serializers.serialize(
      object.username,
      specifiedType: const FullType(String),
    );
    if (object.comment != null) {
      yield r'comment';
      yield serializers.serialize(
        object.comment,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailOrderBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.id = valueDes;
          break;
        case r'status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.status = valueDes;
          break;
        case r'username':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.username = valueDes;
          break;
        case r'comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.comment = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailOrder deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailOrderBuilder();
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

