//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/backup_billing_details.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/backup_service_master.dart';
import 'package:openapi/src/model/backup_service_info.dart';
import 'package:openapi/src/model/backup_client_link.dart';
import 'package:openapi/src/model/backup_extra_info_tables.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup.g.dart';

/// Full detail view of a backup service including billing, service info, and configuration.
///
/// Properties:
/// * [serviceInfo] 
/// * [clientLinks] 
/// * [billingDetails] 
/// * [custCurrency] - Customer's currency.
/// * [custCurrencySymbol] - Customer's currency symbol.
/// * [serviceMaster] 
/// * [package] - Package information.
/// * [serviceExtra] 
/// * [extraInfoTables] 
@BuiltValue()
abstract class Backup implements Built<Backup, BackupBuilder> {
  @BuiltValueField(wireName: r'serviceInfo')
  BackupServiceInfo? get serviceInfo;

  @BuiltValueField(wireName: r'client_links')
  BuiltList<BackupClientLink>? get clientLinks;

  @BuiltValueField(wireName: r'billingDetails')
  BackupBillingDetails? get billingDetails;

  /// Customer's currency.
  @BuiltValueField(wireName: r'custCurrency')
  String? get custCurrency;

  /// Customer's currency symbol.
  @BuiltValueField(wireName: r'custCurrencySymbol')
  String? get custCurrencySymbol;

  @BuiltValueField(wireName: r'serviceMaster')
  BackupServiceMaster? get serviceMaster;

  /// Package information.
  @BuiltValueField(wireName: r'package')
  String? get package;

  @BuiltValueField(wireName: r'serviceExtra')
  String? get serviceExtra;

  @BuiltValueField(wireName: r'extraInfoTables')
  BackupExtraInfoTables? get extraInfoTables;

  Backup._();

  factory Backup([void updates(BackupBuilder b)]) = _$Backup;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Backup> get serializer => _$BackupSerializer();
}

class _$BackupSerializer implements PrimitiveSerializer<Backup> {
  @override
  final Iterable<Type> types = const [Backup, _$Backup];

  @override
  final String wireName = r'Backup';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Backup object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.serviceInfo != null) {
      yield r'serviceInfo';
      yield serializers.serialize(
        object.serviceInfo,
        specifiedType: const FullType(BackupServiceInfo),
      );
    }
    if (object.clientLinks != null) {
      yield r'client_links';
      yield serializers.serialize(
        object.clientLinks,
        specifiedType: const FullType(BuiltList, [FullType(BackupClientLink)]),
      );
    }
    if (object.billingDetails != null) {
      yield r'billingDetails';
      yield serializers.serialize(
        object.billingDetails,
        specifiedType: const FullType(BackupBillingDetails),
      );
    }
    if (object.custCurrency != null) {
      yield r'custCurrency';
      yield serializers.serialize(
        object.custCurrency,
        specifiedType: const FullType(String),
      );
    }
    if (object.custCurrencySymbol != null) {
      yield r'custCurrencySymbol';
      yield serializers.serialize(
        object.custCurrencySymbol,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceMaster != null) {
      yield r'serviceMaster';
      yield serializers.serialize(
        object.serviceMaster,
        specifiedType: const FullType(BackupServiceMaster),
      );
    }
    if (object.package != null) {
      yield r'package';
      yield serializers.serialize(
        object.package,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceExtra != null) {
      yield r'serviceExtra';
      yield serializers.serialize(
        object.serviceExtra,
        specifiedType: const FullType(String),
      );
    }
    if (object.extraInfoTables != null) {
      yield r'extraInfoTables';
      yield serializers.serialize(
        object.extraInfoTables,
        specifiedType: const FullType(BackupExtraInfoTables),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    Backup object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'serviceInfo':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BackupServiceInfo),
          ) as BackupServiceInfo;
          result.serviceInfo.replace(valueDes);
          break;
        case r'client_links':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(BackupClientLink)]),
          ) as BuiltList<BackupClientLink>;
          result.clientLinks.replace(valueDes);
          break;
        case r'billingDetails':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BackupBillingDetails),
          ) as BackupBillingDetails;
          result.billingDetails.replace(valueDes);
          break;
        case r'custCurrency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custCurrency = valueDes;
          break;
        case r'custCurrencySymbol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custCurrencySymbol = valueDes;
          break;
        case r'serviceMaster':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BackupServiceMaster),
          ) as BackupServiceMaster;
          result.serviceMaster.replace(valueDes);
          break;
        case r'package':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.package = valueDes;
          break;
        case r'serviceExtra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceExtra = valueDes;
          break;
        case r'extraInfoTables':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BackupExtraInfoTables),
          ) as BackupExtraInfoTables;
          result.extraInfoTables.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Backup deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupBuilder();
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

