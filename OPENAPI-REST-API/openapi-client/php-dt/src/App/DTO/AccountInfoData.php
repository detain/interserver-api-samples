<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Detailed account profile data including contact info, billing, API keys, and security settings.
 */
class AccountInfoData
{
    #[DTA\Data(field: "group", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $group = null;

    #[DTA\Data(field: "address", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address = null;

    #[DTA\Data(field: "city", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $city = null;

    #[DTA\Data(field: "country", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $country = null;

    #[DTA\Data(field: "disable_cc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $disable_cc = null;

    #[DTA\Data(field: "fraudrecord_score", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $fraudrecord_score = null;

    #[DTA\Data(field: "ima", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ima = null;

    #[DTA\Data(field: "name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $name = null;

    #[DTA\Data(field: "payment_method", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $payment_method = null;

    #[DTA\Data(field: "phone", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $phone = null;

    #[DTA\Data(field: "pin", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $pin = null;

    #[DTA\Data(field: "state", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $state = null;

    #[DTA\Data(field: "status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $status = null;

    #[DTA\Data(field: "zip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $zip = null;

    #[DTA\Data(field: "account_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $account_id = null;

    #[DTA\Data(field: "account_lid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $account_lid = null;

    #[DTA\Data(field: "address2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address2 = null;

    #[DTA\Data(field: "affiliate_dock_description", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $affiliate_dock_description = null;

    #[DTA\Data(field: "affiliate_dock_title", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $affiliate_dock_title = null;

    #[DTA\Data(field: "affiliate_payment_method", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $affiliate_payment_method = null;

    #[DTA\Data(field: "affiliate_paypal", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $affiliate_paypal = null;

    #[DTA\Data(field: "cc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc = null;

    #[DTA\Data(field: "cc_auto", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc_auto = null;

    #[DTA\Data(field: "cc_exp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc_exp = null;

    #[DTA\Data(field: "cc_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc_type = null;

    #[DTA\Data(field: "cc_whitelist", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cc_whitelist = null;

    #[DTA\Data(field: "ccs", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoDataCcs::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoDataCcs::class])]
    public \App\DTO\AccountInfoDataCcs|null $ccs = null;

    #[DTA\Data(field: "ccs_added", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ccs_added = null;

    #[DTA\Data(field: "company", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $company = null;

    #[DTA\Data(field: "currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency = null;

    #[DTA\Data(field: "disable_reinstall", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $disable_reinstall = null;

    #[DTA\Data(field: "disable_reset", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $disable_reset = null;

    #[DTA\Data(field: "email", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $email = null;

    #[DTA\Data(field: "email_abuse", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $email_abuse = null;

    #[DTA\Data(field: "email_settings", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoDataEmailSettings::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoDataEmailSettings::class])]
    public \App\DTO\AccountInfoDataEmailSettings|null $email_settings = null;

    #[DTA\Data(field: "extra", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoDataExtra::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoDataExtra::class])]
    public \App\DTO\AccountInfoDataExtra|null $extra = null;

    #[DTA\Data(field: "facebook_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $facebook_id = null;

    #[DTA\Data(field: "facebook_url", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $facebook_url = null;

    #[DTA\Data(field: "firstname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $firstname = null;

    #[DTA\Data(field: "fraudrecord", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoDataFraudrecord::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoDataFraudrecord::class])]
    public \App\DTO\AccountInfoDataFraudrecord|null $fraudrecord = null;

    #[DTA\Data(field: "github_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $github_id = null;

    #[DTA\Data(field: "github_url", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $github_url = null;

    #[DTA\Data(field: "google_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $google_id = null;

    #[DTA\Data(field: "google_url", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $google_url = null;

    #[DTA\Data(field: "innertell_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $innertell_id = null;

    #[DTA\Data(field: "lastname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $lastname = null;

    #[DTA\Data(field: "locale", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $locale = null;

    #[DTA\Data(field: "maxmind", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoMaxMindResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoMaxMindResponse::class])]
    public \App\DTO\AccountInfoMaxMindResponse|null $maxmind = null;

    #[DTA\Data(field: "maxmind_score", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $maxmind_score = null;

    #[DTA\Data(field: "mb_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mb_id = null;

    #[DTA\Data(field: "modernbill_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $modernbill_id = null;

    #[DTA\Data(field: "picture", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $picture = null;

    #[DTA\Data(field: "referrer_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $referrer_coupon = null;

    #[DTA\Data(field: "reseller_markup", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $reseller_markup = null;

    #[DTA\Data(field: "username", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $username = null;

    #[DTA\Data(field: "ssh_key", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ssh_key = null;

    #[DTA\Data(field: "ssh_key_wrapped", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ssh_key_wrapped = null;

    #[DTA\Data(field: "api_key", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $api_key = null;

    #[DTA\Data(field: "api_key_wrapped", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $api_key_wrapped = null;

    #[DTA\Data(field: "2fa_google_key", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_2fa_google_key = null;

    #[DTA\Data(field: "2fa_google_enabled", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $_2fa_google_enabled = null;

    #[DTA\Data(field: "2fa_google", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $_2fa_google = null;

    #[DTA\Data(field: "2fa_google_split", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_2fa_google_split = null;

    #[DTA\Data(field: "2fa_google_qr", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_2fa_google_qr = null;

}
