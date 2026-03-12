<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Billing information for a webhosting service including payment status, billing cycle, and cost.
 */
class WebsiteBillingDetails
{
    /**
     * Last invoice date for the service
     */
    #[DTA\Data(field: "service_last_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_last_invoice_date = null;

    /**
     * Payment status for the service
     */
    #[DTA\Data(field: "service_payment_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_payment_status = null;

    /**
     * Frequency of the service
     */
    #[DTA\Data(field: "service_frequency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_frequency = null;

    /**
     * Next date for the service
     */
    #[DTA\Data(field: "next_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $next_date = null;

    /**
     * Next invoice date for the service
     */
    #[DTA\Data(field: "service_next_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_next_invoice_date = null;

    /**
     * Currency for the service
     */
    #[DTA\Data(field: "service_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency = null;

    /**
     * Currency symbol for the service
     */
    #[DTA\Data(field: "service_currency_symbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency_symbol = null;

    /**
     * Coupon for the service
     */
    #[DTA\Data(field: "service_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_coupon = null;

    /**
     * Cost information for the service
     */
    #[DTA\Data(field: "service_cost_info", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_cost_info = null;

    /**
     * Extra information for the service
     */
    #[DTA\Data(field: "service_extra", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "object"])]
    public object|null $service_extra = null;

    /**
     * Extra information in JSON format for the service
     */
    #[DTA\Data(field: "service_extra_json", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_extra_json = null;

}
