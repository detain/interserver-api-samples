(ns inter-server-management-api.specs.vps-da-data
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-da-license :refer :all]
            )
  (:import (java.io File)))


(def vps-da-data-data
  {
   (ds/opt :free) vps-da-license-spec
   })

(def vps-da-data-spec
  (ds/spec
    {:name ::vps-da-data
     :spec vps-da-data-data}))
