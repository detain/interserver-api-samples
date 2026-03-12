<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A result row from the &#x60;Servers&#x60; &#x60;GET&#x60; request.
 */
class ServerRow
{
    /**
     * The id of the server.
     */
    #[DTA\Data(field: "server_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_id = null;

    /**
     * The account lid of the server.
     */
    #[DTA\Data(field: "account_lid")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $account_lid = null;

    /**
     * The hostname of the server.
     */
    #[DTA\Data(field: "server_hostname")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_hostname = null;

    /**
     * The status of the server.
     */
    #[DTA\Data(field: "server_status")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $server_status = null;

}
