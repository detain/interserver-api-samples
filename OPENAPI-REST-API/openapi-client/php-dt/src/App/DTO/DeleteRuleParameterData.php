<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for deleteRule
 */
class DeleteRuleParameterData
{
    /**
     * The ID of the Rules entry.
     */
    #[DTA\Data(subset: "path", field: "rule")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "path")]
    public string|null $rule = null;

    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "path")]
    public int|null $id = null;

}
