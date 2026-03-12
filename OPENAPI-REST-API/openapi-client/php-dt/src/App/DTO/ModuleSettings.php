<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * The settings for a module.
 */
class ModuleSettings
{
    #[DTA\Data(field: "SERVICE_ID_OFFSET")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $service_id_offset = null;

    #[DTA\Data(field: "USE_REPEAT_INVOICE")]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $use_repeat_invoice = null;

    #[DTA\Data(field: "USE_PACKAGES")]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $use_packages = null;

    #[DTA\Data(field: "BILLING_DAYS_OFFSET")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $billing_days_offset = null;

    #[DTA\Data(field: "IMGNAME")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $imgname = null;

    #[DTA\Data(field: "REPEAT_BILLING_METHOD")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $repeat_billing_method = null;

    #[DTA\Data(field: "DELETE_PENDING_DAYS")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $delete_pending_days = null;

    #[DTA\Data(field: "SUSPEND_DAYS")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $suspend_days = null;

    #[DTA\Data(field: "SUSPEND_WARNING_DAYS")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $suspend_warning_days = null;

    #[DTA\Data(field: "TITLE")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title = null;

    #[DTA\Data(field: "MENUNAME")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $menuname = null;

    #[DTA\Data(field: "EMAIL_FROM")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $email_from = null;

    #[DTA\Data(field: "TBLNAME")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $tblname = null;

    #[DTA\Data(field: "TABLE")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $table = null;

    #[DTA\Data(field: "TITLE_FIELD")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title_field = null;

    #[DTA\Data(field: "PREFIX")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $prefix = null;

    #[DTA\Data(field: "TITLE_FIELD2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title_field2 = null;

    #[DTA\Data(field: "TITLE_FIELD3", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $title_field3 = null;

}
