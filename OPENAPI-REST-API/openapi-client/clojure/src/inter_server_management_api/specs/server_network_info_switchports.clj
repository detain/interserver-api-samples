(ns inter-server-management-api.specs.server-network-info-switchports
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-switchport :refer :all]
            )
  (:import (java.io File)))


(def server-network-info-switchports-data
  {
   (ds/req :10414) server-switchport-spec
   })

(def server-network-info-switchports-spec
  (ds/spec
    {:name ::server-network-info-switchports
     :spec server-network-info-switchports-data}))
