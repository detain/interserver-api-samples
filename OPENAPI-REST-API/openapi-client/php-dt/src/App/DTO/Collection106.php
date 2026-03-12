<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ScalarList", ["type" => \App\DTO\Collection105::class])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "Scalar", "options" => ["type" => \App\DTO\Collection105::class]]
]])]
class Collection106 extends \ArrayObject
{
}
