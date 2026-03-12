(ns inter-server-management-api.specs.reverse-dns-entries
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.any-type :refer :all]
            )
  (:import (java.io File)))


(def reverse-dns-entries-data
  {
   (ds/opt :ips) (s/map-of string? s/any?)
   })

(def reverse-dns-entries-spec
  (ds/spec
    {:name ::reverse-dns-entries
     :spec reverse-dns-entries-data}))
