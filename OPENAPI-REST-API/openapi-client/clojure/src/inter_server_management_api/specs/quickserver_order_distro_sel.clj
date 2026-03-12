(ns inter-server-management-api.specs.quickserver-order-distro-sel
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.quickserver-order-distro-sel-ubuntu :refer :all]
            )
  (:import (java.io File)))


(def quickserver-order-distro-sel-data
  {
   (ds/opt :Ubuntu) quickserver-order-distro-sel-ubuntu-spec
   })

(def quickserver-order-distro-sel-spec
  (ds/spec
    {:name ::quickserver-order-distro-sel
     :spec quickserver-order-distro-sel-data}))
