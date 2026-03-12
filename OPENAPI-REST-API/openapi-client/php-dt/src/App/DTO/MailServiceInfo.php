<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class MailServiceInfo
{
    /**
     * The ID of the mail service.
     */
    #[DTA\Data(field: "mail_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_id = null;

    /**
     * The type of mail service.
     */
    #[DTA\Data(field: "mail_type")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_type = null;

    /**
     * The currency of the mail service.
     */
    #[DTA\Data(field: "mail_currency")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_currency = null;

    /**
     * The order date of the mail service.
     */
    #[DTA\Data(field: "mail_order_date")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_order_date = null;

    /**
     * The customer ID associated with the mail service.
     */
    #[DTA\Data(field: "mail_custid")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_custid = null;

    /**
     * The mail quota for the service.
     */
    #[DTA\Data(field: "mail_quota")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_quota = null;

    /**
     * The status of the mail service.
     */
    #[DTA\Data(field: "mail_status")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_status = null;

    /**
     * The invoice ID of the mail service.
     */
    #[DTA\Data(field: "mail_invoice")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_invoice = null;

    /**
     * The username associated with the mail service.
     */
    #[DTA\Data(field: "mail_username", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_username = null;

    /**
     * The IP address associated with the mail service.
     */
    #[DTA\Data(field: "mail_ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_ip = null;

    /**
     * The coupon associated with the mail service.
     */
    #[DTA\Data(field: "mail_coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_coupon = null;

    /**
     * Additional information for the mail service.
     */
    #[DTA\Data(field: "mail_extra", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_extra = null;

    /**
     * The server status of the mail service.
     */
    #[DTA\Data(field: "mail_server_status", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_server_status = null;

    /**
     * Additional comments for the mail service.
     */
    #[DTA\Data(field: "mail_comment", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $mail_comment = null;

}
