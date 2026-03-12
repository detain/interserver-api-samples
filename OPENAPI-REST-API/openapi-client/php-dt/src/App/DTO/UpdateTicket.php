<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Update custom fields of the ticket
 */
class UpdateTicket
{
    #[DTA\Data(field: "ip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip = null;

    #[DTA\Data(field: "ip_address", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_address = null;

    #[DTA\Data(field: "customer_server_access", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $customer_server_access = null;

    #[DTA\Data(field: "root_password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $root_password = null;

    #[DTA\Data(field: "sudo_username", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $sudo_username = null;

    #[DTA\Data(field: "sudo_password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $sudo_password = null;

    #[DTA\Data(field: "port", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $port = null;

}
