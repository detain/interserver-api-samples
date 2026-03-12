<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class WebsiteServiceInfo
{
    /**
     * Website ID
     */
    #[DTA\Data(field: "website_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_id = null;

    /**
     * Website server
     */
    #[DTA\Data(field: "website_server", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_server = null;

    /**
     * Website type
     */
    #[DTA\Data(field: "website_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_type = null;

    /**
     * Currency of the website
     */
    #[DTA\Data(field: "website_currency", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_currency = null;

    /**
     * Order date of the website
     */
    #[DTA\Data(field: "website_order_date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_order_date = null;

    /**
     * Customer ID of the website
     */
    #[DTA\Data(field: "website_custid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_custid = null;

    /**
     * IP address of the website
     */
    #[DTA\Data(field: "website_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_ip = null;

    /**
     * Status of the website
     */
    #[DTA\Data(field: "website_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_status = null;

    /**
     * Invoice of the website
     */
    #[DTA\Data(field: "website_invoice", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_invoice = null;

    /**
     * Coupon for the website
     */
    #[DTA\Data(field: "website_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_coupon = null;

    /**
     * Extra information in JSON format for the website
     */
    #[DTA\Data(field: "website_extra", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_extra = null;

    /**
     * Hostname of the website
     */
    #[DTA\Data(field: "website_hostname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_hostname = null;

    /**
     * Comment for the website
     */
    #[DTA\Data(field: "website_comment", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_comment = null;

    /**
     * Username for the website
     */
    #[DTA\Data(field: "website_username", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_username = null;

    /**
     * Server status of the website
     */
    #[DTA\Data(field: "website_server_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $website_server_status = null;

}
