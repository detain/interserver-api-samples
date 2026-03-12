<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * MaxMind fraud detection scoring data for a credit card transaction.
 */
class AccountInfoMaxMindResponse
{
    #[DTA\Data(field: "distance", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $distance = null;

    #[DTA\Data(field: "countryMatch", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $country_match = null;

    #[DTA\Data(field: "countryCode", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $country_code = null;

    #[DTA\Data(field: "freeMail", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $free_mail = null;

    #[DTA\Data(field: "anonymousProxy", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $anonymous_proxy = null;

    #[DTA\Data(field: "score", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $score = null;

    #[DTA\Data(field: "binMatch", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bin_match = null;

    #[DTA\Data(field: "binCountry", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bin_country = null;

    #[DTA\Data(field: "err", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $err = null;

    #[DTA\Data(field: "proxyScore", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $proxy_score = null;

    #[DTA\Data(field: "ip_region", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_region = null;

    #[DTA\Data(field: "ip_city", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_city = null;

    #[DTA\Data(field: "ip_latitude", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_latitude = null;

    #[DTA\Data(field: "ip_longitude", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_longitude = null;

    #[DTA\Data(field: "binName", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bin_name = null;

    #[DTA\Data(field: "ip_isp", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_isp = null;

    #[DTA\Data(field: "ip_org", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_org = null;

    #[DTA\Data(field: "binNameMatch", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bin_name_match = null;

    #[DTA\Data(field: "binPhoneMatch", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bin_phone_match = null;

    #[DTA\Data(field: "binPhone", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $bin_phone = null;

    #[DTA\Data(field: "custPhoneInBillingLoc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cust_phone_in_billing_loc = null;

    #[DTA\Data(field: "highRiskCountry", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $high_risk_country = null;

    #[DTA\Data(field: "queriesRemaining", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $queries_remaining = null;

    #[DTA\Data(field: "cityPostalMatch", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $city_postal_match = null;

    #[DTA\Data(field: "shipCityPostalMatch", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ship_city_postal_match = null;

    #[DTA\Data(field: "maxmindID", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $maxmind_id = null;

    #[DTA\Data(field: "ip_asnum", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_asnum = null;

    #[DTA\Data(field: "ip_userType", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_user_type = null;

    #[DTA\Data(field: "ip_countryConf", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_country_conf = null;

    #[DTA\Data(field: "ip_regionConf", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_region_conf = null;

    #[DTA\Data(field: "ip_cityConf", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_city_conf = null;

    #[DTA\Data(field: "ip_postalCode", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_postal_code = null;

    #[DTA\Data(field: "ip_postalConf", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_postal_conf = null;

    #[DTA\Data(field: "ip_accuracyRadius", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_accuracy_radius = null;

    #[DTA\Data(field: "ip_netSpeedCell", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_net_speed_cell = null;

    #[DTA\Data(field: "ip_metroCode", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_metro_code = null;

    #[DTA\Data(field: "ip_areaCode", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_area_code = null;

    #[DTA\Data(field: "ip_timeZone", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_time_zone = null;

    #[DTA\Data(field: "ip_regionName", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_region_name = null;

    #[DTA\Data(field: "ip_domain", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_domain = null;

    #[DTA\Data(field: "ip_countryName", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_country_name = null;

    #[DTA\Data(field: "ip_continentCode", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_continent_code = null;

    #[DTA\Data(field: "ip_corporateProxy", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_corporate_proxy = null;

    #[DTA\Data(field: "carderEmail", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $carder_email = null;

    #[DTA\Data(field: "highRiskUsername", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $high_risk_username = null;

    #[DTA\Data(field: "highRiskPassword", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $high_risk_password = null;

    #[DTA\Data(field: "riskScore", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\AccountInfoMaxMindResponseRiskScore::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\AccountInfoMaxMindResponseRiskScore::class])]
    public \App\DTO\AccountInfoMaxMindResponseRiskScore|null $risk_score = null;

    #[DTA\Data(field: "isTransProxy", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $is_trans_proxy = null;

    #[DTA\Data(field: "prepaid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $prepaid = null;

    #[DTA\Data(field: "minfraud_version", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $minfraud_version = null;

    #[DTA\Data(field: "service_level", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_level = null;

    #[DTA\Data(field: "explanation", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $explanation = null;

    #[DTA\Data(field: "female_name", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $female_name = null;

}
