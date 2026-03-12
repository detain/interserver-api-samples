<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ObjectList", ["type" => \App\DTO\BuyItNowServerOrder200ResponseCpInner::class])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "TypeCompliant", "options" => ["type" => \App\DTO\BuyItNowServerOrder200ResponseCpInner::class]]
]])]
class Collection152 extends \ArrayObject
{
}
