<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for webhostingCancel
 */
class WebhostingCancelParameterData
{
    /**
     * The website service ID. Use &#x60;website_id&#x60; from &#x60;GET /websites&#x60;.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "path")]
    public string|null $id = null;

}
