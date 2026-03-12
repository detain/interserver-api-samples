<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class BackupBillingDetails
{
    /**
     * Last invoice date of the service.
     */
    #[DTA\Data(field: "service_last_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_last_invoice_date = null;

    /**
     * Payment status of the service.
     */
    #[DTA\Data(field: "service_payment_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_payment_status = null;

    /**
     * Billing frequency of the service.
     */
    #[DTA\Data(field: "service_frequency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_frequency = null;

    /**
     * Next billing date of the service.
     */
    #[DTA\Data(field: "next_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $next_date = null;

    /**
     * Next invoice date of the service.
     */
    #[DTA\Data(field: "service_next_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_next_invoice_date = null;

    /**
     * Currency of the service.
     */
    #[DTA\Data(field: "service_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency = null;

    /**
     * Currency symbol of the service.
     */
    #[DTA\Data(field: "service_currency_symbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency_symbol = null;

    /**
     * Cost information of the service.
     */
    #[DTA\Data(field: "service_cost_info", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_cost_info = null;

    /**
     * Service Extra Info
     */
    #[DTA\Data(field: "service_extra", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_extra = null;

    /**
     * JSON representation of extra service information.
     */
    #[DTA\Data(field: "service_extra_json", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_extra_json = null;

}
