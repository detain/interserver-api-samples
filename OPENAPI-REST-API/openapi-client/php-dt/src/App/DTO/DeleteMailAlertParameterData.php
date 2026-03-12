<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for deleteMailAlert
 */
class DeleteMailAlertParameterData
{
    /**
     * Alert ID to delete.
     */
    #[DTA\Data(subset: "query", field: "alert_id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "query")]
    public int|null $alert_id = null;

    /**
     * The mail service ID. Use &#x60;mail_id&#x60; from &#x60;GET /mail&#x60;.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "path")]
    public int|null $id = null;

}
