<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ScalarMap", ["type" => \App\DTO\Collection4::class])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "Scalar", "options" => ["type" => \App\DTO\Collection4::class]]
]])]
class Collection5 extends \ArrayObject
{
}
