<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Delete firewall rule for your ip
 */
class DeleteFirewallRule
{
    #[DTA\Data(field: "rule_id")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $rule_id = null;

}
