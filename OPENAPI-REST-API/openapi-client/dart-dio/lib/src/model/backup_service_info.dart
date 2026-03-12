//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup_service_info.g.dart';

/// Core service record for a backup storage service including ID, status, quota, and billing details.
///
/// Properties:
/// * [backupId] - Backup ID.
/// * [backupServer] - Backup server ID.
/// * [backupUsername] - Backup username.
/// * [backupType] - Backup type.
/// * [backupCurrency] - Backup currency.
/// * [backupOrderDate] - Backup order date.
/// * [backupCustid] - Backup customer ID.
/// * [backupQuota] - Backup quota.
/// * [backupIp] - Backup IP address.
/// * [backupStatus] - Backup status.
/// * [backupInvoice] - Backup invoice.
/// * [backupCoupon] - Backup coupon.
/// * [backupExtra] - Backup extra information.
/// * [backupServerStatus] - Backup server status.
/// * [backupComment] - Backup comment.
@BuiltValue()
abstract class BackupServiceInfo implements Built<BackupServiceInfo, BackupServiceInfoBuilder> {
  /// Backup ID.
  @BuiltValueField(wireName: r'backup_id')
  String? get backupId;

  /// Backup server ID.
  @BuiltValueField(wireName: r'backup_server')
  String? get backupServer;

  /// Backup username.
  @BuiltValueField(wireName: r'backup_username')
  String? get backupUsername;

  /// Backup type.
  @BuiltValueField(wireName: r'backup_type')
  String? get backupType;

  /// Backup currency.
  @BuiltValueField(wireName: r'backup_currency')
  String? get backupCurrency;

  /// Backup order date.
  @BuiltValueField(wireName: r'backup_order_date')
  String? get backupOrderDate;

  /// Backup customer ID.
  @BuiltValueField(wireName: r'backup_custid')
  String? get backupCustid;

  /// Backup quota.
  @BuiltValueField(wireName: r'backup_quota')
  String? get backupQuota;

  /// Backup IP address.
  @BuiltValueField(wireName: r'backup_ip')
  String? get backupIp;

  /// Backup status.
  @BuiltValueField(wireName: r'backup_status')
  String? get backupStatus;

  /// Backup invoice.
  @BuiltValueField(wireName: r'backup_invoice')
  String? get backupInvoice;

  /// Backup coupon.
  @BuiltValueField(wireName: r'backup_coupon')
  String? get backupCoupon;

  /// Backup extra information.
  @BuiltValueField(wireName: r'backup_extra')
  String? get backupExtra;

  /// Backup server status.
  @BuiltValueField(wireName: r'backup_server_status')
  String? get backupServerStatus;

  /// Backup comment.
  @BuiltValueField(wireName: r'backup_comment')
  String? get backupComment;

  BackupServiceInfo._();

  factory BackupServiceInfo([void updates(BackupServiceInfoBuilder b)]) = _$BackupServiceInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupServiceInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupServiceInfo> get serializer => _$BackupServiceInfoSerializer();
}

class _$BackupServiceInfoSerializer implements PrimitiveSerializer<BackupServiceInfo> {
  @override
  final Iterable<Type> types = const [BackupServiceInfo, _$BackupServiceInfo];

  @override
  final String wireName = r'BackupServiceInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.backupId != null) {
      yield r'backup_id';
      yield serializers.serialize(
        object.backupId,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupServer != null) {
      yield r'backup_server';
      yield serializers.serialize(
        object.backupServer,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupUsername != null) {
      yield r'backup_username';
      yield serializers.serialize(
        object.backupUsername,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupType != null) {
      yield r'backup_type';
      yield serializers.serialize(
        object.backupType,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupCurrency != null) {
      yield r'backup_currency';
      yield serializers.serialize(
        object.backupCurrency,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupOrderDate != null) {
      yield r'backup_order_date';
      yield serializers.serialize(
        object.backupOrderDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupCustid != null) {
      yield r'backup_custid';
      yield serializers.serialize(
        object.backupCustid,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupQuota != null) {
      yield r'backup_quota';
      yield serializers.serialize(
        object.backupQuota,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupIp != null) {
      yield r'backup_ip';
      yield serializers.serialize(
        object.backupIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupStatus != null) {
      yield r'backup_status';
      yield serializers.serialize(
        object.backupStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupInvoice != null) {
      yield r'backup_invoice';
      yield serializers.serialize(
        object.backupInvoice,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupCoupon != null) {
      yield r'backup_coupon';
      yield serializers.serialize(
        object.backupCoupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupExtra != null) {
      yield r'backup_extra';
      yield serializers.serialize(
        object.backupExtra,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupServerStatus != null) {
      yield r'backup_server_status';
      yield serializers.serialize(
        object.backupServerStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.backupComment != null) {
      yield r'backup_comment';
      yield serializers.serialize(
        object.backupComment,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupServiceInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'backup_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupId = valueDes;
          break;
        case r'backup_server':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupServer = valueDes;
          break;
        case r'backup_username':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupUsername = valueDes;
          break;
        case r'backup_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupType = valueDes;
          break;
        case r'backup_currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupCurrency = valueDes;
          break;
        case r'backup_order_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupOrderDate = valueDes;
          break;
        case r'backup_custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupCustid = valueDes;
          break;
        case r'backup_quota':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupQuota = valueDes;
          break;
        case r'backup_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupIp = valueDes;
          break;
        case r'backup_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupStatus = valueDes;
          break;
        case r'backup_invoice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupInvoice = valueDes;
          break;
        case r'backup_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupCoupon = valueDes;
          break;
        case r'backup_extra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupExtra = valueDes;
          break;
        case r'backup_server_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupServerStatus = valueDes;
          break;
        case r'backup_comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.backupComment = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupServiceInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupServiceInfoBuilder();
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

