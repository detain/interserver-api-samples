(ns inter-server-management-api.specs.vps-plesk12-data
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-plesk-license :refer :all]
            [inter-server-management-api.specs.vps-plesk-license :refer :all]
            [inter-server-management-api.specs.vps-plesk-license :refer :all]
            )
  (:import (java.io File)))


(def vps-plesk12-data-data
  {
   (ds/opt :admin) vps-plesk-license-spec
   (ds/opt :pro) vps-plesk-license-spec
   (ds/opt :host) vps-plesk-license-spec
   })

(def vps-plesk12-data-spec
  (ds/spec
    {:name ::vps-plesk12-data
     :spec vps-plesk12-data-data}))
