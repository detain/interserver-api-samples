<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ObjectList", ["type" => \App\DTO\BuyItNowServerOrder200ResponseBandwidthInner::class])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "TypeCompliant", "options" => ["type" => \App\DTO\BuyItNowServerOrder200ResponseBandwidthInner::class]]
]])]
class Collection149 extends \ArrayObject
{
}
