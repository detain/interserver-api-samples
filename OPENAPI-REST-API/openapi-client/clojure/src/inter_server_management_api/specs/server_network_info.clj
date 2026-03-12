(ns inter-server-management-api.specs.server-network-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-network-info-assets :refer :all]
            [inter-server-management-api.specs.server-network-info-switchports :refer :all]
            )
  (:import (java.io File)))


(def server-network-info-data
  {
   (ds/req :vlans) (s/coll-of string?)
   (ds/req :vlans6) (s/coll-of string?)
   (ds/req :assets) server-network-info-assets-spec
   (ds/req :switchports) server-network-info-switchports-spec
   })

(def server-network-info-spec
  (ds/spec
    {:name ::server-network-info
     :spec server-network-info-data}))
