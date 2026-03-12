//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'home_ticket_status_view.g.dart';

/// Ticket statuses with view numbers.
///
/// Properties:
/// * [n4] - Status corresponding to view number 4.
/// * [n5] - Status corresponding to view number 5.
/// * [n6] - Status corresponding to view number 6.
@BuiltValue()
abstract class HomeTicketStatusView implements Built<HomeTicketStatusView, HomeTicketStatusViewBuilder> {
  /// Status corresponding to view number 4.
  @BuiltValueField(wireName: r'4')
  String? get n4;

  /// Status corresponding to view number 5.
  @BuiltValueField(wireName: r'5')
  String? get n5;

  /// Status corresponding to view number 6.
  @BuiltValueField(wireName: r'6')
  String? get n6;

  HomeTicketStatusView._();

  factory HomeTicketStatusView([void updates(HomeTicketStatusViewBuilder b)]) = _$HomeTicketStatusView;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(HomeTicketStatusViewBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<HomeTicketStatusView> get serializer => _$HomeTicketStatusViewSerializer();
}

class _$HomeTicketStatusViewSerializer implements PrimitiveSerializer<HomeTicketStatusView> {
  @override
  final Iterable<Type> types = const [HomeTicketStatusView, _$HomeTicketStatusView];

  @override
  final String wireName = r'HomeTicketStatusView';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    HomeTicketStatusView object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n4 != null) {
      yield r'4';
      yield serializers.serialize(
        object.n4,
        specifiedType: const FullType(String),
      );
    }
    if (object.n5 != null) {
      yield r'5';
      yield serializers.serialize(
        object.n5,
        specifiedType: const FullType(String),
      );
    }
    if (object.n6 != null) {
      yield r'6';
      yield serializers.serialize(
        object.n6,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    HomeTicketStatusView object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required HomeTicketStatusViewBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'4':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n4 = valueDes;
          break;
        case r'5':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n5 = valueDes;
          break;
        case r'6':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n6 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  HomeTicketStatusView deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = HomeTicketStatusViewBuilder();
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

