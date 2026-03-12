<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ScalarList", ["type" => \App\DTO\Collection69::class])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "Scalar", "options" => ["type" => \App\DTO\Collection69::class]]
]])]
class Collection70 extends \ArrayObject
{
}
