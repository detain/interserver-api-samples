//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'license_row.g.dart';

/// A result row from the `Licenses` `GET` request.
///
/// Properties:
/// * [licenseId] - The id of the license.
/// * [licenseHostname] - The hostname of the license.
/// * [licenseIp] - The ip of the license.
/// * [servicesName] - The services name of the license.
/// * [cost] - The cost of the license.
/// * [licenseStatus] - The status of the license.
/// * [invoicesPaid] - The invoices paid of the license.
/// * [invoicesDate] - The invoices date of the license.
@BuiltValue()
abstract class LicenseRow implements Built<LicenseRow, LicenseRowBuilder> {
  /// The id of the license.
  @BuiltValueField(wireName: r'license_id')
  String? get licenseId;

  /// The hostname of the license.
  @BuiltValueField(wireName: r'license_hostname')
  String? get licenseHostname;

  /// The ip of the license.
  @BuiltValueField(wireName: r'license_ip')
  String? get licenseIp;

  /// The services name of the license.
  @BuiltValueField(wireName: r'services_name')
  String? get servicesName;

  /// The cost of the license.
  @BuiltValueField(wireName: r'cost')
  String? get cost;

  /// The status of the license.
  @BuiltValueField(wireName: r'license_status')
  String? get licenseStatus;

  /// The invoices paid of the license.
  @BuiltValueField(wireName: r'invoices_paid')
  String? get invoicesPaid;

  /// The invoices date of the license.
  @BuiltValueField(wireName: r'invoices_date')
  DateTime? get invoicesDate;

  LicenseRow._();

  factory LicenseRow([void updates(LicenseRowBuilder b)]) = _$LicenseRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicenseRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicenseRow> get serializer => _$LicenseRowSerializer();
}

class _$LicenseRowSerializer implements PrimitiveSerializer<LicenseRow> {
  @override
  final Iterable<Type> types = const [LicenseRow, _$LicenseRow];

  @override
  final String wireName = r'LicenseRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicenseRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.licenseId != null) {
      yield r'license_id';
      yield serializers.serialize(
        object.licenseId,
        specifiedType: const FullType(String),
      );
    }
    if (object.licenseHostname != null) {
      yield r'license_hostname';
      yield serializers.serialize(
        object.licenseHostname,
        specifiedType: const FullType(String),
      );
    }
    if (object.licenseIp != null) {
      yield r'license_ip';
      yield serializers.serialize(
        object.licenseIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesName != null) {
      yield r'services_name';
      yield serializers.serialize(
        object.servicesName,
        specifiedType: const FullType(String),
      );
    }
    if (object.cost != null) {
      yield r'cost';
      yield serializers.serialize(
        object.cost,
        specifiedType: const FullType(String),
      );
    }
    if (object.licenseStatus != null) {
      yield r'license_status';
      yield serializers.serialize(
        object.licenseStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.invoicesPaid != null) {
      yield r'invoices_paid';
      yield serializers.serialize(
        object.invoicesPaid,
        specifiedType: const FullType(String),
      );
    }
    if (object.invoicesDate != null) {
      yield r'invoices_date';
      yield serializers.serialize(
        object.invoicesDate,
        specifiedType: const FullType(DateTime),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LicenseRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicenseRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'license_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseId = valueDes;
          break;
        case r'license_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseHostname = valueDes;
          break;
        case r'license_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseIp = valueDes;
          break;
        case r'services_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesName = valueDes;
          break;
        case r'cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.cost = valueDes;
          break;
        case r'license_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseStatus = valueDes;
          break;
        case r'invoices_paid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.invoicesPaid = valueDes;
          break;
        case r'invoices_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DateTime),
          ) as DateTime;
          result.invoicesDate = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LicenseRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicenseRowBuilder();
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

