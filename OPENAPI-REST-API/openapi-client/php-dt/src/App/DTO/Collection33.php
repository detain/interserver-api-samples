<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ObjectList", ["type" => \App\DTO\DomainNameServer::class])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "TypeCompliant", "options" => ["type" => \App\DTO\DomainNameServer::class]]
]])]
class Collection33 extends \ArrayObject
{
}
