<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A result row from the &#x60;Quickservers&#x60; &#x60;GET&#x60; request.
 */
class QuickserverRow
{
    /**
     * The id of the qs.
     */
    #[DTA\Data(field: "qs_id")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_id = null;

    /**
     * The name of the qs.
     */
    #[DTA\Data(field: "qs_name")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_name = null;

    /**
     * The cost of the qs.
     */
    #[DTA\Data(field: "cost")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cost = null;

    /**
     * The hostname of the qs.
     */
    #[DTA\Data(field: "qs_hostname")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_hostname = null;

    /**
     * The status of the qs.
     */
    #[DTA\Data(field: "qs_status")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_status = null;

    /**
     * The comment of the qs.
     */
    #[DTA\Data(field: "qs_comment")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $qs_comment = null;

}
