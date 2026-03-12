<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Optional fields providing additional info in ticket
 */
class TicketCustomFieldDetails
{
    #[DTA\Data(field: "Customer Server Access", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $customer_server_access = null;

    #[DTA\Data(field: "Ip Address", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ip_address = null;

    #[DTA\Data(field: "Root Password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $root_password = null;

    #[DTA\Data(field: "Sudo User", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $sudo_user = null;

    #[DTA\Data(field: "Sudo Password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $sudo_password = null;

    #[DTA\Data(field: "Port", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $port = null;

}
