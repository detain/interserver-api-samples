<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for getFloatingIpsWelcomeEmail
 */
class GetFloatingIpsWelcomeEmailParameterData
{
    /**
     * The Floating IP service ID. Use the ID from &#x60;GET /floating_ips&#x60;.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "path")]
    public int|null $id = null;

}
