<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Billing information for a domain service including payment status, dates, and cost.
 */
class DomainBillingDetails
{
    /**
     * Date of the last invoice for the domain.
     */
    #[DTA\Data(field: "service_last_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_last_invoice_date = null;

    /**
     * Current payment status (e.g., Paid, Unpaid).
     */
    #[DTA\Data(field: "service_payment_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_payment_status = null;

    /**
     * Billing frequency (e.g., Yearly, Monthly).
     */
    #[DTA\Data(field: "service_frequency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_frequency = null;

    /**
     * Next billing date (ISO 8601).
     */
    #[DTA\Data(field: "next_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $next_date = null;

    /**
     * Human-readable next invoice date.
     */
    #[DTA\Data(field: "service_next_invoice_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_next_invoice_date = null;

    /**
     * Billing currency code.
     */
    #[DTA\Data(field: "service_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency = null;

    /**
     * Billing currency symbol.
     */
    #[DTA\Data(field: "service_currency_symbol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_currency_symbol = null;

    /**
     * Cost breakdown information.
     */
    #[DTA\Data(field: "service_cost_info", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_cost_info = null;

    #[DTA\Data(field: "service_extra", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainBillingExtra::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainBillingExtra::class])]
    public \App\DTO\DomainBillingExtra|null $service_extra = null;

    /**
     * Raw JSON string of extra billing data.
     */
    #[DTA\Data(field: "service_extra_json", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_extra_json = null;

}
