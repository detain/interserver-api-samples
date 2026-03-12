<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Billing information for a mail service including payment status, billing cycle, and cost.
 */
class MailBillingDetails
{
    /**
     * The last invoice date of the service.
     */
    #[DTA\Data(field: "service_last_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_last_invoice_date = null;

    /**
     * The payment status of the service.
     */
    #[DTA\Data(field: "service_payment_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_payment_status = null;

    /**
     * The frequency of the service payment.
     */
    #[DTA\Data(field: "service_frequency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_frequency = null;

    /**
     * The next payment date of the service.
     */
    #[DTA\Data(field: "next_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $next_date = null;

    /**
     * The next invoice date of the service.
     */
    #[DTA\Data(field: "service_next_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_next_invoice_date = null;

    /**
     * The currency of the service.
     */
    #[DTA\Data(field: "service_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency = null;

    /**
     * The currency symbol of the service.
     */
    #[DTA\Data(field: "service_currency_symbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency_symbol = null;

    /**
     * The cost information of the service.
     */
    #[DTA\Data(field: "service_cost_info", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_cost_info = null;

    /**
     * Extra information for the service.
     */
    #[DTA\Data(field: "service_extra", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection54::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection54::class])]
    public \App\DTO\Collection54|null $service_extra = null;

    /**
     * Extra JSON information for the service.
     */
    #[DTA\Data(field: "service_extra_json", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_extra_json = null;

}
