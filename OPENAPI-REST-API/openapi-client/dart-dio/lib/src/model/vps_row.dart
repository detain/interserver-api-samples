//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_row.g.dart';

/// A result row from the `Vps` `GET` request.
///
/// Properties:
/// * [vpsId] - The id of the vps.
/// * [vpsName] - The name of the vps.
/// * [repeatInvoicesCost] - The repeat invoices cost of the vps.
/// * [vpsHostname] - The hostname of the vps.
/// * [vpsIp] - The ip of the vps.
/// * [vpsStatus] - The status of the vps.
/// * [servicesName] - The services name of the vps.
/// * [vpsComment] - The comment of the vps.
@BuiltValue()
abstract class VpsRow implements Built<VpsRow, VpsRowBuilder> {
  /// The id of the vps.
  @BuiltValueField(wireName: r'vps_id')
  String get vpsId;

  /// The name of the vps.
  @BuiltValueField(wireName: r'vps_name')
  String get vpsName;

  /// The repeat invoices cost of the vps.
  @BuiltValueField(wireName: r'repeat_invoices_cost')
  String get repeatInvoicesCost;

  /// The hostname of the vps.
  @BuiltValueField(wireName: r'vps_hostname')
  String get vpsHostname;

  /// The ip of the vps.
  @BuiltValueField(wireName: r'vps_ip')
  String get vpsIp;

  /// The status of the vps.
  @BuiltValueField(wireName: r'vps_status')
  String get vpsStatus;

  /// The services name of the vps.
  @BuiltValueField(wireName: r'services_name')
  String get servicesName;

  /// The comment of the vps.
  @BuiltValueField(wireName: r'vps_comment')
  String get vpsComment;

  VpsRow._();

  factory VpsRow([void updates(VpsRowBuilder b)]) = _$VpsRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsRow> get serializer => _$VpsRowSerializer();
}

class _$VpsRowSerializer implements PrimitiveSerializer<VpsRow> {
  @override
  final Iterable<Type> types = const [VpsRow, _$VpsRow];

  @override
  final String wireName = r'VpsRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'vps_id';
    yield serializers.serialize(
      object.vpsId,
      specifiedType: const FullType(String),
    );
    yield r'vps_name';
    yield serializers.serialize(
      object.vpsName,
      specifiedType: const FullType(String),
    );
    yield r'repeat_invoices_cost';
    yield serializers.serialize(
      object.repeatInvoicesCost,
      specifiedType: const FullType(String),
    );
    yield r'vps_hostname';
    yield serializers.serialize(
      object.vpsHostname,
      specifiedType: const FullType(String),
    );
    yield r'vps_ip';
    yield serializers.serialize(
      object.vpsIp,
      specifiedType: const FullType(String),
    );
    yield r'vps_status';
    yield serializers.serialize(
      object.vpsStatus,
      specifiedType: const FullType(String),
    );
    yield r'services_name';
    yield serializers.serialize(
      object.servicesName,
      specifiedType: const FullType(String),
    );
    yield r'vps_comment';
    yield serializers.serialize(
      object.vpsComment,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'vps_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsId = valueDes;
          break;
        case r'vps_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsName = valueDes;
          break;
        case r'repeat_invoices_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.repeatInvoicesCost = valueDes;
          break;
        case r'vps_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsHostname = valueDes;
          break;
        case r'vps_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsIp = valueDes;
          break;
        case r'vps_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsStatus = valueDes;
          break;
        case r'services_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesName = valueDes;
          break;
        case r'vps_comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsComment = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsRowBuilder();
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

