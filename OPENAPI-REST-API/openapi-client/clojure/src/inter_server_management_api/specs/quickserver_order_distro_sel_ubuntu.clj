(ns inter-server-management-api.specs.quickserver-order-distro-sel-ubuntu
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def quickserver-order-distro-sel-ubuntu-data
  {
   (ds/opt :Ubuntu) string?
   })

(def quickserver-order-distro-sel-ubuntu-spec
  (ds/spec
    {:name ::quickserver-order-distro-sel-ubuntu
     :spec quickserver-order-distro-sel-ubuntu-data}))
