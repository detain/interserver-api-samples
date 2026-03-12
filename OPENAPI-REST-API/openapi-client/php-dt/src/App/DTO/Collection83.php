<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ObjectList", ["type" => \App\DTO\GetScrubIpDetails200ResponseFilterFirewallFiltersInner::class])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "TypeCompliant", "options" => ["type" => \App\DTO\GetScrubIpDetails200ResponseFilterFirewallFiltersInner::class]]
]])]
class Collection83 extends \ArrayObject
{
}
