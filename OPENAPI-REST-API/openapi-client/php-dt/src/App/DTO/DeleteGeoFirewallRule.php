<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Delete geo firewall rule for your scrub ip
 */
class DeleteGeoFirewallRule
{
    #[DTA\Data(field: "rule_id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $rule_id = null;

}
