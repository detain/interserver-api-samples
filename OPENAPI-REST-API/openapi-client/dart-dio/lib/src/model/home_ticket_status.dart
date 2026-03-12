//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_ticket_status.g.dart';

/// Ticket statuses.
///
/// Properties:
/// * [open] - Count of open tickets.
/// * [onHold] - Count of tickets on hold.
@BuiltValue()
abstract class HomeTicketStatus implements Built<HomeTicketStatus, HomeTicketStatusBuilder> {
  /// Count of open tickets.
  @BuiltValueField(wireName: r'Open')
  int? get open;

  /// Count of tickets on hold.
  @BuiltValueField(wireName: r'On Hold')
  int? get onHold;

  HomeTicketStatus._();

  factory HomeTicketStatus([void updates(HomeTicketStatusBuilder b)]) = _$HomeTicketStatus;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeTicketStatusBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeTicketStatus> get serializer => _$HomeTicketStatusSerializer();
}

class _$HomeTicketStatusSerializer implements PrimitiveSerializer<HomeTicketStatus> {
  @override
  final Iterable<Type> types = const [HomeTicketStatus, _$HomeTicketStatus];

  @override
  final String wireName = r'HomeTicketStatus';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeTicketStatus object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.open != null) {
      yield r'Open';
      yield serializers.serialize(
        object.open,
        specifiedType: const FullType(int),
      );
    }
    if (object.onHold != null) {
      yield r'On Hold';
      yield serializers.serialize(
        object.onHold,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeTicketStatus object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeTicketStatusBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'Open':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.open = valueDes;
          break;
        case r'On Hold':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.onHold = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeTicketStatus deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeTicketStatusBuilder();
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

