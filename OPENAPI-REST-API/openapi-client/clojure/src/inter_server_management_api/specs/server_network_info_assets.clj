(ns inter-server-management-api.specs.server-network-info-assets
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-asset :refer :all]
            )
  (:import (java.io File)))


(def server-network-info-assets-data
  {
   (ds/req :3497) server-asset-spec
   })

(def server-network-info-assets-spec
  (ds/spec
    {:name ::server-network-info-assets
     :spec server-network-info-assets-data}))
